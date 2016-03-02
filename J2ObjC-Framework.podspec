@version = "1.0.0.1"

Pod::Spec.new do |s|
  s.name         		= "J2ObjC-Framework-iOS7x"
  s.version      		= @version
  s.summary      		= "Frameworked version of J2ObjC"
  s.homepage        = "https://github.com/madordie/J2ObjC-Framework.git"
  s.license         = { :type => 'MIT', :file => 'LICENSE' }
  s.author       		= { "Keith" => "keith_127@126.com" }
  s.source          = { :git => "https://github.com/madordie/J2ObjC-Framework.git", :tag => "v#{s.version}" }

  s.platform     		= :ios, "7.0"
  s.requires_arc 		= true

  s.frameworks      = 'Security'
  s.libraries       = 'icucore', 'z'

  s.prepare_command = <<-CMD
      Scripts/download.sh
  CMD

  s.preserve_paths = ['Frameworks/j2objc.framework', 'Distributive', 'install.sh']
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/J2ObjC-Framework/Frameworks"' }  
  
end
