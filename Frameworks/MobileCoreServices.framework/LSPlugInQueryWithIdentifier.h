/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    long  _bindingMap;
    NSString * _identifier;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_identifier;
- (id)_initWithIdentifier:(id)arg1 inMap:(long)arg2;
- (BOOL)_shouldCacheResolvedResults;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
