pushd cocoadocs.org
git checkout -f *
cat ../cocoadocs.org.patch | git apply
gem install bundler
bundle install
bundle exec rake install_tools
