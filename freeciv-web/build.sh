cd src/main/webapp/ &&
sh compress-js.sh &&
cd ../../../ &&
mvn install && cp target/freeciv-web.war ~/freeciv-build/resin-4.0.24/webapps/ROOT.war && cd ~/freeciv-build/resin-4.0.24/webapps/ && rm -rf ROOT && unzip ROOT.war -d ROOT
