
#import <Foundation/Foundation.h>
#import <WebRTC/RTCMacros.h>

NS_ASSUME_NONNULL_BEGIN

RTC_OBJC_EXPORT
@protocol RCAudioMixerObserver <NSObject>

-(void) OnAudioInitialized;

-(void) OnAudioInitializeFailed;

-(void) onDataAvailable;

-(void) handleInterruptionBegin;

-(void) handleInterruptionEnd;

-(void) handleInterruptionFailed;

-(void) onStarted;

-(void) onStartFailed;

-(void) onStopped;

-(void) onShutDown;

@end

NS_ASSUME_NONNULL_END
