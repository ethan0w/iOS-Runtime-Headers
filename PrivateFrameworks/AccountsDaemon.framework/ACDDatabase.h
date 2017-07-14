/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDatabase : NSObject {
    NSManagedObjectContext * _context;
    id  _contextDidSaveNotificationObserver;
    NSManagedObjectModel * _model;
    NSString * _path;
    NSPersistentStore * _store;
}

@property (nonatomic) int keychainVersion;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) int version;

+ (BOOL)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id*)arg4;
+ (struct __CFString { }*)_copyRootPath;
+ (BOOL)_isUnrecoverableDatabaseError:(id)arg1;
+ (id)_managedObjectModel;
+ (id)_optionsForOpeningPersistentStore;
+ (void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
+ (void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2;
+ (void)_resetPeristentStoreCoordinator;
+ (id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1;
+ (id)defaultPath;

- (void).cxx_destruct;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (BOOL)_databaseFileExists;
- (void)_handleManagedObjectContextDidSaveNotification:(id)arg1;
- (void)_setupManagedObjectContext;
- (id)_store;
- (unsigned int)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (void)dealloc;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;
- (id)initWithTimeMachineHomeFolderPath:(id)arg1;
- (int)keychainVersion;
- (id)managedObjectContext;
- (id)managedObjectIDForURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (id)path;
- (BOOL)saveWithError:(id*)arg1;
- (BOOL)saveWithError:(id*)arg1 rollbackOnFailure:(BOOL)arg2;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)setKeychainVersion:(int)arg1;
- (void)setVersion:(int)arg1;
- (int)version;

@end
