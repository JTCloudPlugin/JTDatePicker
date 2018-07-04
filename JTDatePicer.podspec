Last login: Wed Jul  4 16:08:59 on ttys004
KKIMac:~ xiaoneng$ vim /Users/xiaoneng/Desktop/JTAliPay/JTAliPay.podspec 


# coding: utf-8
Pod::Spec.new do |s|
  s.name         = "JTDatePicer"
  s.version      = "1.0.0"
  s.summary      = "JTDatePicer Source ."
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

