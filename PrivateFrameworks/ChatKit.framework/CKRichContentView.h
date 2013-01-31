/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRichContentView : CKTextContentView <DOMEventListener> {
    id _richContentDelegate;
}

@property id richContentDelegate;


- (id)createDocumentFragment;
- (id)richContentDelegate;
- (void)_wvInsertHTML:(id)arg1;
- (void)_wvHelperThawSelectionTag;
- (id)nodeForImageSize:(struct CGSize { float x1; float x2; })arg1 ID:(id)arg2 URL:(id)arg3;
- (id)brElement;
- (void)insertHTML:(id)arg1;
- (void)setRichContentDelegate:(id)arg1;
- (void)setHTML:(id)arg1;
- (id)html;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)DOMDocument;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
