#import <Cocoa/Cocoa.h>

@interface NSObject (MTShell)
- (NSValue*) MouseTerm_initVars;
- (id) MouseTerm_get: (NSString*) name;
- (void) MouseTerm_set: (NSString*) name value: (id) value;
- (void) MouseTerm_dealloc;

- (void) MouseTerm_setMouseMode: (int)mouseMode;
- (int) MouseTerm_getMouseMode;

- (void) MouseTerm_setAppCursorMode: (BOOL)appCursorMode;
- (BOOL) MouseTerm_getAppCursorMode;

- (void) MouseTerm_setIsMouseDown: (BOOL)isMouseDown;
- (BOOL) MouseTerm_getIsMouseDown;

@end