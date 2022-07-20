#!/bin/bash 
docker-compose up -d
docker-compose exec dev ./fbt resources icons dolphin_ext dolphin_internal
docker-compose exec dev ./fbt firmware_extapps FIRMWARE_APP_SET=ext_apps
docker-compose exec dev ./fbt