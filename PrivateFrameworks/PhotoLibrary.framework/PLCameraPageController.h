/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLApplicationCameraViewController, PLKeepDaemonAliveAssertion, UIPanGestureRecognizer, UIViewController;

@interface PLCameraPageController : UIPageController <PLApplicationCameraViewControllerDelegate, PLAlbumListChangeObserver, PLAlbumChangeObserver, PLCameraPreviewWellImageChangeObserver, PLPhotoBrowserControllerDelegate, UIScrollViewDelegate, UIPageControllerDelegate> {
    struct NSObject { Class x1; } *_cameraAlbum;
    PLApplicationCameraViewController *_cameraViewController;
    UIViewController *_cameraAlbumNavigationController;
    UIViewController *_presentedCameraAlbumNavigationController;
    UIPanGestureRecognizer *_cameraPagePanGestureRecognizer;
    double _sessionStartTime;
    BOOL _supportsVideos;
    BOOL _usesSessionAlbum;
    BOOL _shouldShowCameraAlbum;
    BOOL _delayLoadingPhotoLibrary;
    BOOL _previouslyDidntChangeStatusBar;
    BOOL _ignoreVolumeButtons;
    BOOL _isDismissingCameraAlbum;
    BOOL _reallyIgnoreVolumeButtonEvents;
    PLKeepDaemonAliveAssertion *_keepDaemonAliveAssertion;
}

@property(retain) PLApplicationCameraViewController * cameraViewController;
@property(retain) UIViewController * cameraAlbumNavigationController;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (void)albumListDidChange:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (void)prepareForDismissal;
- (void)stopCameraPreview;
- (id)initWithSessionID:(id)arg1;
- (void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2;
- (void)dismissCameraAlbumForSuspension;
- (void)_setupSwipeGesture;
- (void)_updatePhotoBrowsersGestureEnabledState;
- (void)_stopCameraPreviewAnimated:(BOOL)arg1;
- (id)_presentedPhotoBrowser;
- (id)_photoBrowserForNavigationController:(id)arg1;
- (void)_updateStatusBarPositionForView:(id)arg1;
- (void)_cleanupForCameraEnd;
- (void)_showCameraAlbumIndexSheet:(BOOL)arg1;
- (void)setCameraAlbumNavigationController:(id)arg1;
- (void)setCameraViewController:(id)arg1;
- (id)_currentPhotoBrowser;
- (id)initWithSessionID:(id)arg1 startPreviewImmediately:(BOOL)arg2;
- (id)_initWithSessionID:(id)arg1 useCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (void)_setWantsVolumeButtonEvents:(BOOL)arg1;
- (void)_resetStatusBarPosition;
- (void)_enableSwipeToCameraRoll:(BOOL)arg1;
- (void)_createCameraViewControllerWithSessionAlbum:(BOOL)arg1 useCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (id)newAlbumNavigationController;
- (void)dismissCameraAlbum:(id)arg1;
- (void)_updateVolumeButtonEventsAbility;
- (void)dismissCameraAlbumAnimated:(BOOL)arg1 forSuspension:(BOOL)arg2;
- (id)cameraViewController;
- (id)cameraAlbumNavigationController;
- (unsigned int)albumPageIndex;
- (unsigned int)cameraPageIndex;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1;
- (struct NSObject { Class x1; }*)cameraAlbum;
- (id)_pagingPhotoBrowser;
- (void)startCameraPreviewWithSavedConfiguration;
- (void)startCameraPreview;
- (BOOL)showingCameraPreview;
- (void)cameraViewControllerFinishedOpeningIrisForPreview:(id)arg1;
- (void)cameraViewControllerFinishedClosingIris:(id)arg1;
- (void)cameraViewControllerUIShouldUnlock:(id)arg1;
- (void)cameraViewControllerUIShouldLock:(id)arg1;
- (void)_handleVolumeButtonUp;
- (void)_handleVolumeButtonDown;
- (void)_libraryDidChange:(id)arg1;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)pageControllerDidEndPaging:(id)arg1;
- (void)pageControllerWillBeginPaging:(id)arg1;
- (Class)_pageControllerScrollViewClass;
- (id)pageController:(id)arg1 viewControllerAtIndex:(int)arg2;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)takePicture;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)applicationDidResume;
- (void)didReceiveMemoryWarning;
- (void)prepareForDefaultImageSnapshot;
- (void)applicationWillSuspend;
- (void)scrollViewDidScroll:(id)arg1;

@end
