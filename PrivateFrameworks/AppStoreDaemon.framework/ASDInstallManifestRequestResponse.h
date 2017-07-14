/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDInstallManifestRequestResponse : ASDRequestResponse {
    NSArray * _results;
    BOOL  _success;
}

@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) BOOL success;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)results;
- (BOOL)success;

@end
