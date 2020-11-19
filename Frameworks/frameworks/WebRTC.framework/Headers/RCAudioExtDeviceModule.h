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

@interface RCAudioExtDeviceModule : NSObject

@property(nonatomic, readonly, weak) id<RCAudioMixerObserver> delegate;

-(instancetype)initWithDelegate:(id<RCAudioMixerObserver>)observer;

-(void)OnDeliverRecordedData:(int32_t)numFrames;
-(BOOL)registerRecordAudioMixerSource:(RCAudioMixerSourceAdapter*)source;
-(BOOL)unRegisterRecordAudioMixerSource:(RCAudioMixerSourceAdapter*)source;
@end

NS_ASSUME_NONNULL_END


