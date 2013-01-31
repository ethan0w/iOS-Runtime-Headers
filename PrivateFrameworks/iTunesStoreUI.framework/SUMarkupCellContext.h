/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUMarkupCellContext : SUItemCellContext  {
    int _pendingWebViewLoads;
    NSString *_stylesheet;
    struct __CFDictionary { } *_webViewCache;
    float _webViewWidth;
}

@property(retain) NSString * stylesheet;
@property float webViewWidth;


- (void)setWebViewWidth:(float)arg1;
- (id)webViewForMarkup:(id)arg1;
- (void)dealloc;
- (id)stylesheet;
- (void)setStylesheet:(id)arg1;
- (void)webViewDidFinishLoading:(id)arg1;
- (float)webViewWidth;

@end
