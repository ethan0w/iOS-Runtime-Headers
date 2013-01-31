/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewURLProtocol : NSURLProtocol  {
}

+ (void)initialize;
+ (id)mimeTypeForAttachmentURL:(id)arg1;
+ (id)errorForURL:(id)arg1;
+ (void)setError:(id)arg1 forURL:(id)arg2;
+ (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
+ (void)unregisterURLs:(id)arg1 andPreview:(id)arg2;
+ (id)_errorForNoPreview;
+ (void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
+ (id)newURLWithContentID:(id)arg1 baseURL:(id)arg2;
+ (id)newUniqueURLWithName:(id)arg1;
+ (void)stopLoadingProtocol:(id)arg1;
+ (void)startLoadingProtocol:(id)arg1;
+ (id)_errorForCancel;
+ (void)_unregisterURL:(id)arg1;
+ (id)_errorForAbort;
+ (void)registerPreview:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
