/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController {
    unsigned int  _mode;
    PXPeopleNamePickerTitleView * _peopleTitleView;
    PHPerson * _person;
}

@property (nonatomic) unsigned int mode;
@property (nonatomic, retain) PXPeopleNamePickerTitleView *peopleTitleView;
@property (nonatomic, retain) PHPerson *person;

- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (id)createAssetActionManager;
- (id)createTitleView;
- (unsigned int)mode;
- (id)peopleTitleView;
- (id)person;
- (void)setMode:(unsigned int)arg1;
- (void)setPeopleTitleView:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)updateBars;

@end
