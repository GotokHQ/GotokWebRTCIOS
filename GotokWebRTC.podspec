#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#
Pod::Spec.new do |s|
  s.name             = 'GotokWebRTC'
  s.version          = '0.0.1'
  s.summary          = 'webrtc sdk'
  s.platforms.ios    = '10.0'
  s.description      = <<-DESC
    WebRTC SDK for Gotok.
                         DESC
  s.homepage         = 'http://www.gotok.app'
  s.license          = { :file => './LICENSE' }
  s.author           = { 'Gotok' => 'onye@gotok.app' }
  s.source           = { :git => "https://github.com/GotokHQ/GotokWebRTCIOS.git", :tag => "main" }
  s.vendored_frameworks = ' "Frameworks/frameworks/WebRTC.framework"'
  s.ios.deployment_target = '10.0'
end

