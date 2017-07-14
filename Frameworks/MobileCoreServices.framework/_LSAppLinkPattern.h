/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSAppLinkPattern : NSObject {
    BOOL  _blocking;
    NSString * _pattern;
}

@property (getter=isBlocking) BOOL blocking;
@property (copy) NSString *pattern;

+ (id)_normalizedURLPath:(id)arg1 escapeCharacters:(BOOL)arg2;

- (void)dealloc;
- (id)debugDescription;
- (unsigned int)evaluateWithURLComponents:(id)arg1;
- (id)initWithURLPathPattern:(id)arg1;
- (BOOL)isBlocking;
- (id)pattern;
- (void)setBlocking:(BOOL)arg1;
- (void)setPattern:(id)arg1;

@end
