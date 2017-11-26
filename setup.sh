rvm use 2.3.1
pushd cocoadocs.org
git checkout -f .
cp ../parse.scss views
cat ../cocoadocs.org.patch | git apply
gem install bundler
bundle install
bundle exec rake install_tools
