project('provisioningd', 'cpp')

executable('provisioningd',
  'provisioningd.cpp',
  install: true,
  install_dir: '/usr/bin'
)

install_data('xyz.openbmc_project.Provisioning.service',
  install_dir: '/lib/systemd/system'
)

