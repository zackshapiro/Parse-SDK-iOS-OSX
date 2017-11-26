mkdir -p docsets
pushd cocoadocs.org

./cocoadocs.rb preview ParseUI
rsync --ignore-existing --recursive activity/docsets/ParseUI ../docsets/

./cocoadocs.rb preview Parse
rsync --ignore-existing --recursive activity/docsets/Parse ../docsets/

./cocoadocs.rb preview ParseFacebookUtils
rsync --ignore-existing --recursive activity/docsets/ParseFacebookUtils ../docsets/

./cocoadocs.rb preview ParseFacebookUtilsV4
rsync --ignore-existing --recursive activity/docsets/ParseFacebookUtilsV4 ../docsets/

./cocoadocs.rb preview ParseTwitterUtils
rsync --ignore-existing --recursive activity/docsets/ParseTwitterUtils ../docsets/

./cocoadocs.rb preview ParseLiveQuery
rsync --ignore-existing --recursive activity/docsets/ParseLiveQuery ../docsets/
