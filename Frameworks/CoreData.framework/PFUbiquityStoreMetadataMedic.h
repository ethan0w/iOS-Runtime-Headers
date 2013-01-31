/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSSQLiteConnection, NSPersistentStore, PFUbiquityLocation;

@interface PFUbiquityStoreMetadataMedic : NSObject  {
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSPersistentStore *_store;
    NSSQLiteConnection *_connection;
}

@property(readonly) NSString * localPeerID;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSString * storeName;
@property(readonly) NSPersistentStore * store;
@property(readonly) NSSQLiteConnection * connection;


- (void)dealloc;
- (id)connection;
- (BOOL)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3;
- (BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id*)arg2;
- (BOOL)recoverMetadataWithError:(id*)arg1;
- (id)initWithStore:(id)arg1 andLocalPeerID:(id)arg2;
- (id)storeName;
- (id)ubiquityRootLocation;
- (id)localPeerID;
- (id)store;

@end
