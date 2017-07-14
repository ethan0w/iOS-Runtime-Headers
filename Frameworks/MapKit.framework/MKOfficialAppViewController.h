/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    BOOL  _isShowing;
    MKMapItem * _mapItem;
    <MKOfficialAppViewControllerDelegate> * _officialAppDelegate;
    MKPlaceSectionHeaderView * _officialAppHeaderView;
    MKOfficialAppView * _officialAppView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isShowing;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) <MKOfficialAppViewControllerDelegate> *officialAppDelegate;
@property (nonatomic, retain) MKPlaceSectionHeaderView *officialAppHeaderView;
@property (nonatomic, retain) MKOfficialAppView *officialAppView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginFindingOfficialApp;
- (void)dealloc;
- (id)infoCardChildPossibleActions;
- (id)initWithMKMapItem:(id)arg1;
- (BOOL)isShowing;
- (id)mapItem;
- (id)officialAppDelegate;
- (id)officialAppHeaderView;
- (id)officialAppView;
- (void)officialAppViewDidSelectPunchOutButton:(id)arg1;
- (void)setIsShowing:(BOOL)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOfficialAppDelegate:(id)arg1;
- (void)setOfficialAppHeaderView:(id)arg1;
- (void)setOfficialAppView:(id)arg1;
- (void)updateOfficialViewButtonText;
- (void)viewDidLoad;

@end
