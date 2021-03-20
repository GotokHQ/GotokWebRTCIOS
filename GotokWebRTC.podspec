#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#
Pod::Spec.new do |s|
  s.name             = 'GotokWebRTC'
  s.version          = 'v0.0.2'
  s.summary          = 'webrtc sdk'
  s.description      = <<-DESC
    WebRTC SDK for Gotok.
                         DESC
  s.homepage         = 'http://www.gotok.app'
  s.license          = { :file => './LICENSE', :type => 'Multiple' }
  s.author           = { 'Gotok' => 'onye@gotok.app' }
  s.source           = { :git => "https://github.com/GotokHQ/GotokWebRTCIOS.git", :tag => s.version,  }
  s.vendored_frameworks = 'Frameworks/frameworks/WebRTC.framework'
  s.ios.deployment_target = '10.0'
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end

