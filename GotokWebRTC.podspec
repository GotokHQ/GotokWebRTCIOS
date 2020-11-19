#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#
Pod::Spec.new do |s|
  s.name             = 'GotokWebRTC'
  s.version          = '0.0.1'
  s.summary          = 'webrtc sdk'
  s.description      = <<-DESC
    WebRTC SDK for recordly.
                         DESC
  s.homepage         = 'http://www.recordly.app'
  s.license          = { :file => './LICENSE' }
  s.author           = { 'Your Company' => 'email@example.com' }
  s.source           = { :path => '.' }
  s.vendored_frameworks = 'WebRTC.framework'
  s.ios.deployment_target = '10.0'
end

