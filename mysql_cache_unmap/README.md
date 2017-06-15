# mysql_cache_unmap

modified "https://github.com/yoshinorim/unmap_mysql_logs"

mysql_cache_unmap - bash
lib/unmap_cache.c - unmap page cache
 
How to use:
1. Compile "lib/unmap_cache.c" 
<pre><code>$ gcc -o unmap_cache unmap_cache.c 
</code></pre>

2. Change or Add binary/relay log directory
<pre><code>$ vi mysql_cache_unmap
  gen_log_names /log/binary-log
  gen_log_names /log/relay-log
</code></pre>

3. Execute mysql_cache_unmap
<pre><code>$ mysql_cache_unmap > mysql_cache_unmap.log 2>&1
</code></pre>
