project('provisioningd', 'cpp')

executable('provisioningd',
  'provisioningd.cpp',
  install: true,
  install_dir: '/usr/bin'
)

install_data('provisioningd.service',
  install_dir: '/lib/systemd/system'
)

