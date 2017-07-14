/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWritingClaim : NSFileAccessClaim {
    NSFileAccessNode * _location;
    unsigned int  _options;
    NSURL * _url;
    BOOL  _urlDidChange;
}

+ (BOOL)supportsSecureCoding;

- (id)allURLs;
- (BOOL)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id /* block */)arg2;
- (void)granted;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned int)arg3 claimer:(id /* block */)arg4;
- (void)invokeClaimer;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLsThenContinueInvokingClaimer:(id /* block */)arg1;

@end
