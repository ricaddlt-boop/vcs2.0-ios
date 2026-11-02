source 'https://github.com/CocoaPods/Specs'
source 'https://cdn.cocoapods.org/'

platform :ios, '13.0'

target 'UnityFramework' do
  pod 'UnityAds', '~> 4.17.0'
end
target 'Unity-iPhone' do
end
use_frameworks! :linkage => :static

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '13.0'
      config.build_settings['EXPANDED_CODE_SIGN_IDENTITY'] = ""
      config.build_settings['CODE_SIGNING_REQUIRED'] = "NO"
      config.build_settings['CODE_SIGNING_ALLOWED'] = "NO"
    end
  end
end
