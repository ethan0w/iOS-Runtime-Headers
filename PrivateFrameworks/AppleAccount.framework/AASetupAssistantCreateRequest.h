/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class AASigningSession, AAAccount, NSDictionary;

@interface AASetupAssistantCreateRequest : AARequest  {
    NSDictionary *appleIDParameters;
    AASigningSession *signingSession;
    AAAccount *_account;
}

+ (Class)responseClass;

- (id)urlString;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)urlRequest;
- (id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3;

@end
