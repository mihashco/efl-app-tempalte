project('efl-app-template', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

subdir('res/edc')

# Setup include directories
inc_list = include_directories('include')

# Setup sources
src_list = [
  './src/main.cpp',
]

src_list += edje_resources

# Setup dependencies
elementary_dep = dependency('elementary', required: true)

deps_list = [
  elementary_dep
]

exe = executable('efl_app_template', 
  src_list,
  include_directories: inc_list,
  dependencies: deps_list,
  install : false)

test('basic', exe)
