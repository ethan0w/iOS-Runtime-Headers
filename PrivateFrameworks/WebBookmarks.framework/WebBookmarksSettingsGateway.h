/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class XPCProxy<WebBookmarksSettingsProtocol>;

@interface WebBookmarksSettingsGateway : NSObject <XPCProxyTarget> {
    XPCProxy<WebBookmarksSettingsProtocol> *_settingsProxy;
}


- (void)setCellularReadingListAllowed:(BOOL)arg1;
- (void)getCellularReadingListAllowedWithCompletion:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

@end
