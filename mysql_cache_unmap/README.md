# mysql_cache_unmap

mysql_cache_unmap - bash
lib/unmap_cache.c - unmap page cache
 
How to use:
1. Compile "lib/unmap_cache.c" 

`
$ gcc -o unmap_cache unmap_cache.c 
`

2. Change or Add binary/relay log directory
<pre><code>
$ vi mysql_cache_unmap
  gen_log_names /log/binary-log
  gen_log_names /log/relay-log
</code></pre>

3. Execute mysql_cache_unmap
`
$ mysql_cache_unmap > mysql_cache_unmap.log 2>&1
`
