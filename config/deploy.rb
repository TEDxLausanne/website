set :application,     "tedxlausanne"

# Relative path to thedrupal path
set :app_path,        "drupal"
set :shared_children, ['drupal/sites/default/files','private-files']
set :shared_files,    ['drupal/sites/default/settings.php']
set :stages,          %w(dev prod)

set :scm,            "git"
set :repository,     "git@github.com:TEDxLausanne/website.git"

set :domain,         "staging.tedxlausanne.org"

set :user,           "tedxlausanne"
set :group,          "tedxlausanne"
set :runner_group,   "tedxlausanne"
set :use_sudo,       false
default_run_options[:pty] = true
ssh_options[:forward_agent] = true

set :download_drush, true

role :app,           domain
role :db,            domain

set  :keep_releases,   3
after "deploy:update", "deploy:cleanup"

# Be more verbose by uncommenting the following line
#logger.level = Logger::MAX_LEVEL


namespace :hotfix do
  task :fix_permissions do
    count = fetch(:keep_releases, 5).to_i
    run("ls -1dt #{releases_path}/* | tail -n +#{count + 1} | xargs chmod -R 777")
  end
end

before "deploy:cleanup", "hotfix:fix_permissions"