mkdir -p docsets
pushd cocoadocs.org
# ./cocoadocs.rb preview ParseUI
# cp -R activity/docsets/ParseUI ../docsets/

./cocoadocs.rb preview Parse
cp -R activity/docsets/Parse ../docsets/

./cocoadocs.rb preview ParseFacebookUtils
cp -R activity/docsets/ParseFacebookUtils ../docsets/

./cocoadocs.rb preview ParseFacebookUtilsV4
cp -R activity/docsets/ParseFacebookUtilsV4 ../docsets/

./cocoadocs.rb preview ParseLiveQuery
cp -R activity/docsets/ParseLiveQuery ../docsets/
