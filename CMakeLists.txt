cmake_minimum_required(VERSION 3.16)
project(redis)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_subdirectory(deps/hiredis)
add_subdirectory(deps/linenoise)

add_subdirectory(deps/lua/src)
add_executable(benchmark.bin ae.c anet.c redis-benchmark.c adlist.c dict.c zmalloc.c siphash.c)
target_link_libraries(benchmark.bin PRIVATE hiredis PUBLIC m PUBLIC pthread PUBLIC dl)

include_directories(deps/lua/src)
add_executable(server.bin adlist.c quicklist.c ae.c anet.c dict.c server.c sds.c zmalloc.c lzf_c.c lzf_d.c pqsort.c zipmap.c sha1.c ziplist.c release.c networking.c util.c object.c db.c replication.c rdb.c t_string.c t_list.c t_set.c t_zset.c t_hash.c config.c aof.c pubsub.c multi.c debug.c sort.c intset.c syncio.c cluster.c crc16.c endianconv.c slowlog.c scripting.c bio.c rio.c rand.c memtest.c crcspeed.c crc64.c bitops.c sentinel.c notify.c setproctitle.c blocked.c hyperloglog.c latency.c sparkline.c redis-check-rdb.c redis-check-aof.c geo.c lazyfree.c module.c evict.c expire.c geohash.c geohash_helper.c childinfo.c defrag.c siphash.c rax.c t_stream.c listpack.c localtime.c lolwut.c lolwut5.c lolwut6.c acl.c gopher.c tracking.c connection.c tls.c sha256.c timeout.c setcpuaffinity.c)
target_link_libraries(server.bin PRIVATE hiredis PUBLIC lua PUBLIC m PUBLIC pthread PUBLIC dl)

# include_directories(deps/linenoise)
# include_directories(deps/lua/src)
# add_executable(cli.bin anet.c adlist.c dict.c redis-cli.c zmalloc.c release.c ae.c crcspeed.c crc64.c siphash.c crc16.c)
# target_link_libraries(cli.bin PRIVATE hiredis PRIVATE linenoise)

# add_executable(init.bin init.c)
# chcore_copy_all_targets_to_ramdisk()
# chcore_copy_files_to_ramdisk(redis.conf)
