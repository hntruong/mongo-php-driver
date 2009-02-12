/**
 *  Copyright 2009 10gen, Inc.
 * 
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 * 
 *  http://www.apache.org/licenses/LICENSE-2.0
 * 
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include <php.h>

PHP_FUNCTION( mongo_gridfs_init );
PHP_FUNCTION( mongo_gridfs_list );
PHP_FUNCTION( mongo_gridfs_store );
PHP_FUNCTION( mongo_gridfs_find );

PHP_FUNCTION( mongo_gridfile_exists );
PHP_FUNCTION( mongo_gridfile_filename );
PHP_FUNCTION( mongo_gridfile_size );
PHP_FUNCTION( mongo_gridfile_write );
PHP_FUNCTION( mongo_gridfile_chunk_size );
PHP_FUNCTION( mongo_gridfile_chunk_num );

PHP_FUNCTION( mongo_gridchunk_get );
PHP_FUNCTION( mongo_gridchunk_size );
PHP_FUNCTION( mongo_gridchunk_data );
