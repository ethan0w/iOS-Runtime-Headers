/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLFacePullSupport : NSObject {
    <PLSyncableAsset> * _currentAsset;
    <PLSyncContext> * _syncContext;
}

+ (void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inPhotoLibrary:(id)arg3;

- (void)_applyDimensionAndStateFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)_applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (id)_detectedFaceFromFaceRef:(id)arg1;
- (id)_detectedFacesFromAssetChange:(id)arg1;
- (id)_existingFacesToKeepWithAssetChange:(id)arg1;
- (void)applyFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)applyFacesChangesFromAssetChange:(id)arg1;
- (void)dealloc;
- (id)initWithSyncContext:(id)arg1 asset:(id)arg2;

@end
