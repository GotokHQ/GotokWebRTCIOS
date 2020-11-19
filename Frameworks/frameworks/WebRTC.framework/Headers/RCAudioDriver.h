#import <Foundation/Foundation.h>

#import <WebRTC/RTCMacros.h>

NS_ASSUME_NONNULL_BEGIN

RTC_OBJC_EXPORT
@protocol RCAudioDriver <NSObject>

-(OSStatus) render:(AudioUnitRenderActionFlags*) flags
         timeStamp:(const AudioTimeStamp*) timeStamp
         busNumber:(UInt32) busNumber
         numFrames:(UInt32) numFrames
            ioData:(AudioBufferList*) ioData;

-(AudioStreamBasicDescription) format;

-(BOOL) initialized;

-(void) setBusNumber:(size_t)busNumber;

-(size_t) getBusNumber;

@end

NS_ASSUME_NONNULL_END
