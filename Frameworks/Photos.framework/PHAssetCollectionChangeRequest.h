/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCollectionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHRelationshipChangeRequestHelper * _assetsHelper;
    BOOL  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    PHChangeRequestHelper * _helper;
    PHAssetCollection * _originalAssetCollection;
}

@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *assetsHelper;
@property (getter=isClientEntitled, nonatomic, readonly) BOOL clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) BOOL mutated;
@property (getter=isNew, readonly) BOOL new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) PHAssetCollection *originalAssetCollection;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *uuid;

+ (id)_changeRequestForAssetCollection:(id)arg1 optionalAssets:(id)arg2;
+ (id)changeRequestForAssetCollection:(id)arg1;
+ (id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2;
+ (id)creationRequestForAssetCollectionWithTitle:(id)arg1;
+ (void)deleteAssetCollections:(id)arg1;
+ (id)validateAssetCollectionTitle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalAssetCollection:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)addAssets:(id)arg1;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)assetsHelper;
- (BOOL)canGenerateUUIDLocally;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned int)arg2;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (BOOL)isClientEntitled;
- (BOOL)isMutated;
- (BOOL)isNew;
- (id)managedEntityName;
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned int)arg2;
- (id)mutations;
- (id)objectID;
- (id)originalAssetCollection;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)placeholderForCreatedAssetCollection;
- (void)removeAsset:(id)arg1;
- (void)removeAssetFromAssetsAtIndex:(unsigned int)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)replaceAssetInAssetsAtIndex:(unsigned int)arg1 withAsset:(id)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)setOriginalAssetCollection:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)uuid;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end
