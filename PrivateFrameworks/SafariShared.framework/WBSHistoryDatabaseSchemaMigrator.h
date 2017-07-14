/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryDatabaseSchemaMigrator : NSObject {
    WBSHistoryDatabaseAccessBroker * _databaseAccessBroker;
}

- (void).cxx_destruct;
- (BOOL)_createDatabaseSchema:(id)arg1 error:(id*)arg2;
- (BOOL)_migrateDatabase:(id)arg1 fromSchemaVersion:(int)arg2 toSchemaVersion:(int)arg3 error:(id*)arg4;
- (BOOL)_setDatabaseSchemaVersion:(int)arg1 forDatabase:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithDatabaseAccessBroker:(id)arg1;
- (void)migrateToCurrentSchemaVersionWithCompletionHandler:(id /* block */)arg1;

@end
