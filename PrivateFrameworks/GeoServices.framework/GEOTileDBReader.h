/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileDBMRU, NSString, NSObject<OS_dispatch_queue>;

@interface GEOTileDBReader : NSObject  {
    BOOL _defunct;
    BOOL _closed;
    int _editionUpdating;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSString *_path;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_tileQuery;
    struct sqlite3_stmt { } *_versionQuery;
    GEOTileDBMRU *_tileDBMRU;
    struct { unsigned int x1; double x2; } *_expirationRecords;
    unsigned int _expirationRecordCount;
}

@property BOOL closed;
@property(retain) GEOTileDBMRU * tileDBMRU;


- (void)dealloc;
- (void)setTileDBMRU:(id)arg1;
- (id)tileDBMRU;
- (void)setExpirationRecords:(struct { unsigned int x1; double x2; }*)arg1 count:(unsigned int)arg2;
- (void)dataForKeys:(id)arg1 asyncHandler:(id)arg2;
- (void)setClosed:(BOOL)arg1;
- (BOOL)closed;
- (id)_dataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)_openDB;
- (void)_closeDB;
- (void)_deviceLocking;
- (void)_editionUpdateEnd:(id)arg1;
- (void)_editionUpdateBegin:(id)arg1;
- (void)_databaseReset:(id)arg1;
- (void)dataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 asyncHandler:(id)arg2;
- (id)initWithPath:(id)arg1;
- (id)dataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
