# coding: utf-8
Pod::Spec.new do |s|
  s.name         = "JTDatePicker"
  s.version      = "1.0.1"
  s.summary      = "JTDatePicker Source ."
  s.homepage     = 'https://github.com/JTCloudPlugin/JTDatePicker'
  s.license      = "MIT"
  s.authors      = { "kk" => "jtcloud@163.com" }
  s.platform     = :ios
  s.ios.deployment_target = "8.0"
  s.source = { :git => 'https://github.com/JTCloudPlugin/JTDatePicker.git', :tag => s.version.to_s }
  s.source_files = 'Source/*.{h,m}'
  #s.public_header_files =
  s.requires_arc = true
  s.frameworks = 'UIKit','Foundation'
end
