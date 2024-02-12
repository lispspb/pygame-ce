/* Auto generated file: with makeref.py .  Docs go in docs/reST/ref/ . */
#define DOC_RECT "Rect(left, top, width, height) -> Rect\nRect((left, top), (width, height)) -> Rect\nRect((width, height)) -> Rect\nRect(object) -> Rect\nRect() -> Rect\nFRect(left, top, width, height) -> FRect\nFRect((left, top), (width, height)) -> FRect\nFRect((width, height)) -> FRect\nFRect(object) -> FRect\nFRect() -> FRect\npygame object for storing rectangular coordinates"
#define DOC_RECT_COPY "copy() -> Rect\ncopy the rectangle"
#define DOC_RECT_MOVE "move(x, y, /) -> Rect\nmoves the rectangle"
#define DOC_RECT_MOVEIP "move_ip(x, y, /) -> None\nmoves the rectangle, in place"
#define DOC_RECT_MOVETO "move_to(**kwargs) -> Rect\nmoves the rectangle to the specified position"
#define DOC_RECT_INFLATE "inflate(x, y, /) -> Rect\ngrow or shrink the rectangle size"
#define DOC_RECT_INFLATEIP "inflate_ip(x, y, /) -> None\ngrow or shrink the rectangle size, in place"
#define DOC_RECT_SCALEBY "scale_by(scale_by) -> Rect\nscale_by(x, y) -> Rect\nscale the rectangle by given a multiplier"
#define DOC_RECT_SCALEBYIP "scale_by_ip(scale_by) -> None\nscale_by_ip(x, y) -> None\ngrow or shrink the rectangle size, in place"
#define DOC_RECT_UPDATE "update(left, top, width, height, /) -> None\nupdate((left, top), (width, height), /) -> None\nupdate(object, /) -> None\nsets the position and size of the rectangle"
#define DOC_RECT_CLAMP "clamp(rect, /) -> Rect\nmoves the rectangle inside another"
#define DOC_RECT_CLAMPIP "clamp_ip(rect, /) -> None\nmoves the rectangle inside another, in place"
#define DOC_RECT_CLIP "clip(rect, /) -> Rect\ncrops a rectangle inside another"
#define DOC_RECT_CLIPLINE "clipline(x1, y1, x2, y2, /) -> ((cx1, cy1), (cx2, cy2))\nclipline(x1, y1, x2, y2, /) -> ()\nclipline((x1, y1), (x2, y2), /) -> ((cx1, cy1), (cx2, cy2))\nclipline((x1, y1), (x2, y2), /) -> ()\nclipline((x1, y1, x2, y2), /) -> ((cx1, cy1), (cx2, cy2))\nclipline((x1, y1, x2, y2), /) -> ()\nclipline(((x1, y1), (x2, y2)), /) -> ((cx1, cy1), (cx2, cy2))\nclipline(((x1, y1), (x2, y2)), /) -> ()\ncrops a line inside a rectangle"
#define DOC_RECT_UNION "union(rect, /) -> Rect\njoins two rectangles into one"
#define DOC_RECT_UNIONIP "union_ip(rect, /) -> None\njoins two rectangles into one, in place"
#define DOC_RECT_UNIONALL "unionall(rect_sequence, /) -> Rect\nthe union of many rectangles"
#define DOC_RECT_UNIONALLIP "unionall_ip(rect_sequence, /) -> None\nthe union of many rectangles, in place"
#define DOC_RECT_FIT "fit(rect, /) -> Rect\nresize and move a rectangle with aspect ratio"
#define DOC_RECT_NORMALIZE "normalize() -> None\ncorrect negative sizes"
#define DOC_RECT_CONTAINS "contains(rect, /) -> bool\ntest if one rectangle is inside another"
#define DOC_RECT_COLLIDEPOINT "collidepoint(x, y, /) -> bool\ncollidepoint((x, y), /) -> bool\ntest if a point is inside a rectangle"
#define DOC_RECT_COLLIDERECT "colliderect(rect, /) -> bool\ntest if two rectangles overlap"
#define DOC_RECT_COLLIDELIST "collidelist(list, /) -> index\ntest if one rectangle in a list intersects"
#define DOC_RECT_COLLIDELISTALL "collidelistall(list, /) -> indices\ntest if all rectangles in a list intersect"
#define DOC_RECT_COLLIDEOBJECTS "collideobjects(rect_list) -> object\ncollideobjects(obj_list, key=func) -> object\ntest if any object in a list intersects"
#define DOC_RECT_COLLIDEOBJECTSALL "collideobjectsall(rect_list) -> objects\ncollideobjectsall(obj_list, key=func) -> objects\ntest if all objects in a list intersect"
#define DOC_RECT_COLLIDEDICT "collidedict(rect_dict) -> (key, value)\ncollidedict(rect_dict) -> None\ncollidedict(rect_dict, values=False) -> (key, value)\ncollidedict(rect_dict, values=False) -> None\ntest if one rectangle in a dictionary intersects"
#define DOC_RECT_COLLIDEDICTALL "collidedictall(rect_dict) -> [(key, value), ...]\ncollidedictall(rect_dict, values=False) -> [(key, value), ...]\ntest if all rectangles in a dictionary intersect"
