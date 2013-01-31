/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSMutableArray;

@interface SSDownloadPolicy : NSObject <NSCoding, SSXPCCoding, NSCopying> {
    int _bagType;
    NSString *_downloadKind;
    NSMutableArray *_policyRules;
}

@property(readonly) NSString * downloadKind;
@property(readonly) int URLBagType;
@property(copy) NSArray * policyRules;


- (int)URLBagType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setPolicyRules:(id)arg1;
- (void)setPolicyRule:(id)arg1;
- (id)_policyRuleForSizeLimit:(long long)arg1;
- (void)unionNetworkConstraints:(id)arg1;
- (id)downloadKind;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithNetworkConstraints:(id)arg1;
- (id)policyRules;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unionPolicyRule:(id)arg1;
- (id)initWithDownloadKind:(id)arg1 URLBagType:(int)arg2;

@end
