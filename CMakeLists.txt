cmake_minimum_required (VERSION 3.6)
project(lv3helmet)

include(cmake/DownloadProject.cmake)

download_project(
	PROJ           sleepy-discord
	GIT_REPOSITORY https://github.com/yourWaifu/sleepy-discord.git
	GIT_TAG        master
	SOURCE_DIR     ${PROJECT_SOURCE_DIR}/deps/sleepy-discord
	UPDATE_DISCONNECTED 1
)

add_subdirectory(deps/sleepy-discord)
add_subdirectory(src)
