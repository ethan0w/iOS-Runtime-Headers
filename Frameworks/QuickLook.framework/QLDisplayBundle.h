/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, <QLPreviewItemInteractionDelegate>, <QLPreviewItem>;

@interface QLDisplayBundle : UIViewController  {
    <QLPreviewItemInteractionDelegate> *_delegate;
    <QLPreviewItem> *_previewItem;
    BOOL _overlayHidden;
    int _previewMode;
    BOOL _loaded;
    BOOL _loading;
    NSString *_password;
    struct { 
        int pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } contentFrame; 
    } clientContext;
    int _index;
}

@property struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property <QLPreviewItemInteractionDelegate> * delegate;
@property(retain) <QLPreviewItem> * previewItem;
@property int previewMode;
@property int index;
@property BOOL loaded;
@property BOOL loading;
@property(retain) NSString * password;

+ (BOOL)needsAVControls;
+ (id)backgroundColorForBackgroundType:(int)arg1;
+ (int)backgroundTypeForUTI:(id)arg1 andMode:(int)arg2;
+ (double)allowedLoadingDelay;

- (BOOL)loaded;
- (void)cancelLoad;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)description;
- (void)dealloc;
- (id)init;
- (int)previewMode;
- (void)setPreviewMode:(int)arg1;
- (void)setLoaded:(BOOL)arg1;
- (void)setIndex:(int)arg1;
- (id)printPageRenderer;
- (id)password;
- (int)index;
- (void)viewDidAppear:(BOOL)arg1;
- (int)modalPresentationStyle;
- (void)didReceiveMemoryWarning;
- (void)setClientContext:(struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1;
- (struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (BOOL)overlayOwnedByDisplayBundle;
- (BOOL)canCopyToPasteboard;
- (BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (int)backgroundType;
- (void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2;
- (void)didFailLoadingWithError:(id)arg1;
- (BOOL)overlayIsHidden;
- (void)cancelLoadIfNeeded;
- (BOOL)canBeCached;
- (void)_notifyDidLoadWithError:(id)arg1;
- (void)didLoad;
- (void)loadIfNeededWithHints:(id)arg1;
- (void)_performCancelLoad;
- (id)previewItem;
- (void)loadWithHints:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)togglePlayState;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (id)printPageHelper;
- (id)pdfPreviewData;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)enterBackground;
- (void)setPassword:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (BOOL)loading;

@end
