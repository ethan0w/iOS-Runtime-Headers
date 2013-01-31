/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem  {
    NSMutableSet *_privileges;
}

@property(retain) NSMutableSet * privileges;

+ (id)copyParseRules;

- (void)write:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)addPrivilege:(id)arg1;
- (void)setPrivileges:(id)arg1;
- (id)privileges;

@end
