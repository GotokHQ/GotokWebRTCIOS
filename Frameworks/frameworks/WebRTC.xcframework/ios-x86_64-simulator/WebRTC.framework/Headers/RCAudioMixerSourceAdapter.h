#import <Foundation/Foundation.h>
#import <WebRTC/RTCMacros.h>
#import "RCAudioDriver.h"

NS_ASSUME_NONNULL_BEGIN


RTC_OBJC_EXPORT

@interface RCAudioMixerSourceAdapter : NSObject


- (instancetype)init NS_UNAVAILABLE;

/** Initialize an RTCAudioSourceAdapter with an RTCAudioDriver. */
- (instancetype)initWithDriver:(id<RCAudioDriver>)audioDriver bufferSize:(UInt32)size 
NS_DESIGNATED_INITIALIZER;

-(void)writeToBuffer:(int8_t*)data
                size:(int32_t)sizeInBytes;
-(int32_t)readFromBuffer:(int8_t*)data
                 size:(int32_t)sizeInBytes;
@end


NS_ASSUME_NONNULL_END
