/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPWebDocumentView : UIWebDocumentView  {
    id _loadDelegate;
    NSString *_stylesheet;
    unsigned int _adjustHeightToFit : 1;
    unsigned int _treatAsPlainText : 1;
}

@property id loadDelegate;
@property(retain) NSString * stylesheet;

+ (id)newEmptyLabelView;

- (void)dealloc;
- (id)stylesheet;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)openURL:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)loadDelegate;
- (struct CGSize { float x1; float x2; })layoutWithAutoresizingSize:(struct CGSize { float x1; float x2; })arg1 contentBlock:(id)arg2;
- (void)setPlaintextString:(id)arg1 manuallyWrap:(BOOL)arg2;
- (void)setHTMLFragment:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setLoadDelegate:(id)arg1;
- (void)setContentWithString:(id)arg1 stylesheet:(id)arg2;

@end
