/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLDownloadInternal;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLDownloadInternal *_internal;
}

+ (BOOL)_isEncodingMIMETypeResumable:(id)arg1;
+ (id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
+ (id)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1;

- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)url;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (id)request;
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (void)sendDidFail:(struct __CFError { }*)arg1;
- (void)sendDidFinish;
- (void)sendDidCreateDestination:(struct __CFURL { }*)arg1;
- (void)sendDecideDestinationWithSuggestedObjectName:(struct __CFString { }*)arg1;
- (bool)sendShouldDecodeDataOfMIMEType:(struct __CFString { }*)arg1;
- (void)sendDidReceiveData:(long)arg1;
- (void)sendWillResumeWithResponse:(struct _CFURLResponse { }*)arg1 startingByte:(unsigned long long)arg2;
- (void)sendDidReceiveResponse:(struct _CFURLResponse { }*)arg1;
- (void)sendDidReceiveChallenge:(struct _CFURLAuthChallenge { }*)arg1;
- (unsigned char)sendDownloadShouldUseCredentialStorage;
- (struct _CFURLRequest { }*)sendWillSendRequest:(struct _CFURLRequest { }*)arg1 redirectResponse:(struct _CFURLResponse { }*)arg2;
- (void)sendDidStart:(struct _CFURLDownload { }*)arg1;
- (BOOL)_downloadActive;
- (void)releaseDelegate;
- (id)_originatingURL;
- (void)_setOriginatingURL:(id)arg1;
- (void)_setDirectoryPath:(id)arg1;
- (id)_directoryPath;
- (BOOL)deletesFileUponFailure;
- (void)setDeletesFileUponFailure:(BOOL)arg1;
- (BOOL)_deletesFileAfterFailure;
- (void)_setDeletesFileAfterFailure:(BOOL)arg1;
- (void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2;
- (id)resumeData;
- (id)_resumeInformation;
- (id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (void)cleanupChallenges;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;

@end
