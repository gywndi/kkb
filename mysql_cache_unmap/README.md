# mysql_cache_unmap

unmap_cache.c - unmap page cache
 
How to use:
1. Compile "unmap_cache.c" 
<pre><code>$ gcc -o unmap_cache unmap_cache.c 
</code></pre>

2. Change or Add binary/relay log directory
<pre><code>$ unmap_cache /log/mysql-log/mysql-binary.000001
</code></pre>
