
//
//  RCPeerConnectionFactoryBuilder.h
//  products
//
//  Created by Onyemaechi Okafor on 04/08/2018.
//
#import <WebRTC/RTCPeerConnectionFactory.h>


@protocol RTCVideoDecoderFactory;
@protocol RTCVideoEncoderFactory;
@class RCAudioDeviceModule;
@class RCAudioExtDeviceModule;

RTC_OBJC_EXPORT

NS_ASSUME_NONNULL_BEGIN

@interface RCPeerConnectionFactoryBuilder : NSObject

+ (RCPeerConnectionFactoryBuilder *)builder;

- (RTCPeerConnectionFactory *)createPeerConnectionFactory;

- (void)setVideoEncoderFactory:(nullable id<RTCVideoEncoderFactory>)videoEncoderFactory;

- (void)setVideoDecoderFactory:(nullable id<RTCVideoDecoderFactory>)videoDecoderFactory;

- (void)setAudioDeviceModule:(nullable RCAudioDeviceModule *)audioDeviceModule;

- (void)setAudioExtDeviceModule:(nullable RCAudioExtDeviceModule *)audioExtDeviceModule;

@end

NS_ASSUME_NONNULL_END
