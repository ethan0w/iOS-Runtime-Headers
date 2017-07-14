/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperPickerViewController : HUTableViewController <HUNamedWallpaperCollectionViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUWallpaperPhotoCollectionViewControllerDelegate, PHPhotoLibraryChangeObserver> {
    NSArray * _assetCollections;
    NSMutableDictionary * _assetCollectionsToAssetFetchResults;
    int  _collectionType;
    <HUWallpaperPickerViewControllerDelegate> * _delegate;
    PHCachingImageManager * _imageManager;
    NSString * _namedSectionTitle;
    HUNamedWallpaperCollectionViewController * _namedWallpaperController;
}

@property (nonatomic, retain) NSArray *assetCollections;
@property (nonatomic, retain) NSMutableDictionary *assetCollectionsToAssetFetchResults;
@property (nonatomic) int collectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUWallpaperPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PHCachingImageManager *imageManager;
@property (nonatomic, copy) NSString *namedSectionTitle;
@property (nonatomic, retain) HUNamedWallpaperCollectionViewController *namedWallpaperController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetCollections;
- (id)assetCollectionsToAssetFetchResults;
- (int)collectionType;
- (id)currentSectionIdentifiers;
- (id)delegate;
- (id)identifierForSection:(unsigned int)arg1;
- (id)imageManager;
- (id)initWithCollectionType:(int)arg1 namedSectionTitle:(id)arg2 delegate:(id)arg3;
- (id)initWithStyle:(int)arg1;
- (void)loadAssetCollections;
- (id)namedSectionTitle;
- (id)namedWallpaperController;
- (void)namedWallpaperController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)photoCollectionController:(id)arg1 didChooseWallpaper:(id)arg2 image:(id)arg3;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setAssetCollections:(id)arg1;
- (void)setAssetCollectionsToAssetFetchResults:(id)arg1;
- (void)setCollectionType:(int)arg1;
- (void)setImageManager:(id)arg1;
- (void)setNamedSectionTitle:(id)arg1;
- (void)setNamedWallpaperController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidLoad;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;

@end
