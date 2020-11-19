//
//  RCPeerConnectionFactoryBuilder.h
//  products
//
//  Created by Onyemaechi Okafor on 04/08/2018.
//

#import <Foundation/Foundation.h>
#import <WebRTC/RTCMacros.h>
#import <AudioToolbox/AudioToolbox.h>

@protocol RCAudioMixerObserver;
@class RCAudioMixerSourceAdapter;

RTC_OBJC_EXPORT

NS_ASSUME_NONNULL_BEGIN

@interface RCAudioDeviceModule : NSObject

@property(nonatomic, readonly, weak) id<RCAudioMixerObserver> delegate;

/* Initialize default audio device module*/
-(instancetype)init;

/* Initialize with an audio mixer observer */
- (instancetype)initWithDelegate:(id<RCAudioMixerObserver>)observer;

// Mixer specific functions
-(int32_t) startMixing;
-(int32_t) stopMixing;
-(OSStatus)   render: (AudioUnitRenderActionFlags*) flags
           timeStamp: (AudioTimeStamp*) timeStamp
           busNumber: (UInt32) busNumber
           numFrames: (UInt32) numFrames
              ioData: (AudioBufferList*) ioData;
-(UInt32) framesPerBuffer;
-(int) numberOfChannels;
-(int) bytesPerSample;
-(AudioStreamBasicDescription) GetMixerFormat;
-(BOOL) isInitialized;
-(BOOL)registerRecordAudioMixerSource:(RCAudioMixerSourceAdapter*)source;
-(BOOL)unRegisterRecordAudioMixerSource:(RCAudioMixerSourceAdapter*)source;

@end

NS_ASSUME_NONNULL_END


